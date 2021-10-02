# pip install selenium
# Download chromedriver from https://sites.google.com/a/chromium.org/chromedriver/downloads

import time
import os
from selenium import webdriver 
from selenium.webdriver.common.keys import Keys



def imagedown(search, folder):
    driver = webdriver.Chrome('/Users/joshua/chromedriver') #location where you have saved the chromedriver 
    driver.get('https://www.google.com/imghp?hl=en')
    box = driver.find_element_by_xpath('//*[@id="sbtc"]/div/div[2]/input')
    try:
        os.mkdir(os.path.join(os.getcwd(), folder))
    except:
        pass
    os.chdir(os.path.join(os.getcwd(), folder))
    box.send_keys(search)
    box.send_keys(Keys.ENTER)

    # FOR INFINITE SCROLLING
    # last_height = driver.execute_script('return document.body.scrollHeight')
    # while True:
    #     driver.execute_script('window.scrollTo(0,document.body.scrollHeight)')
    #     time.sleep(2)
    #     new_height = driver.execute_script('return document.body.scrollHeight')
    #     try:
    #         driver.find_element_by_xpath('//*[@id="islmp"]/div/div/div/div/div[5]/input').click()
    #         time.sleep(2)
    #     except:
    #         pass
    #     if new_height == last_height:
    #         break
    #     last_height = new_height
    for i in range(151):
        try:
            driver.find_element_by_xpath('//*[@id="islrg"]/div[1]/div['+str(i)+']/a[1]/div[1]/img').screenshot(folder+'-'+str(i)+'.png')
        except:
            pass
    os.chdir("../")


#imagedown(google search key, folder name)

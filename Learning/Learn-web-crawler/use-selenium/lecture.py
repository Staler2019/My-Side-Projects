from selenium import webdriver
from selenium.webdriver.common.action_chains import ActionChains

PATH = "./edgedriver_win64/msedgedriver.exe"
driver = webdriver.Edge(PATH)
driver.get("https://tsj.tw/")

skills = []
skills.append(
    driver.find_element_by_xpath(
        '//*[@id="app"]/div[2]/div[4]/div[4]/table/tbody/tr[2]/td[4]'
    )
)
skills.append(
    driver.find_element_by_xpath(
        '//*[@id="app"]/div[2]/div[4]/div[4]/table/tbody/tr[3]/td[4]'
    )
)
skills.append(
    driver.find_element_by_xpath(
        '//*[@id="app"]/div[2]/div[4]/div[4]/table/tbody/tr[4]/td[4]'
    )
)

carts = []
carts.append(
    driver.find_element_by_xpath(
        '//*[@id="app"]/div[2]/div[4]/div[4]/table/tbody/tr[2]/td[5]/button[1]'
    )
)
carts.append(
    driver.find_element_by_xpath(
        '//*[@id="app"]/div[2]/div[4]/div[4]/table/tbody/tr[3]/td[5]/button[1]'
    )
)
carts.append(
    driver.find_element_by_xpath(
        '//*[@id="app"]/div[2]/div[4]/div[4]/table/tbody/tr[4]/td[5]/button[1]'
    )
)

action = ActionChains(driver)
action.click(driver.find_element_by_xpath('//*[@id="click"]'))

while 1:
    action.perform()
    blow_point = int(
        driver.find_element_by_xpath('//*[@id="app"]/div[2]/div[4]/div[2]/h4[2]')
        .text.replace("您目前擁有", "")
        .replace("技術點", "")
    )
    min_skill_point = int(skills[0].text.replace("技術點", ""))
    min_skill = 0
    for i in range(1, 3):
        skill_point = int(skills[i].text.replace("技術點", ""))
        if skill_point < min_skill_point:
            min_skill = i
            min_skill_point = skill_point
    if min_skill_point <= blow_point:
        upgrade_action = ActionChains(driver)
        upgrade_action.click(carts[min_skill])
        upgrade_action.perform()

driver.quit()


"""
tsj.tw
1. contantly click blow
2. get blow point each time
3. get skill point each time
4. if blow point >= skill point => buy that skill
"""

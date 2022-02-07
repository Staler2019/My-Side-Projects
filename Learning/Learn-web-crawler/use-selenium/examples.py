from selenium import webdriver

PATH = "./edgedriver_win64/msedgedriver.exe"
driver = webdriver.Edge(PATH)

url = "https://hackmd.io/?nav=overview"
driver.get(url)
# ...
driver.quit()

print(driver.title)
from selenium.webdriver.common.action_chains import ActionChains

actions = ActionChains(driver)
actions.move_to_element(menu)
actions.click(hidden_submenu)
actions.perform()


js = "window.scrollTo(0, document.body.scrollHeight);"
driver.execute_script(js)

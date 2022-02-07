import tensorflow as tf
cpus = tf.config.list_physical_devices(device_type='CPU')
tf.config.set_visible_devices(devices=cpus)

# 定義一個隨機數（純量）
random_float = tf.random.uniform(shape=())
# 定義一個有2個元素的零向量
zero_vector = tf.zeros(shape=(2))

a = tf.constant([[1, 2], [3, 4]])
b = tf.constant([[5, 6], [7, 8]])
c = tf.matmul(a, b)
d = tf.add(a, b)

print(c)
# 查看矩陣A的形狀、類型和值
print(a.shape)      # 輸出(2, 2)，即矩陣的長和寬均為2
print(a.dtype)      # 輸出<dtype: 'float32'>
print(a.numpy())    # 輸出[[1. 2.]
#      [3. 4.]]
print(d)

# TODO redo this file
from Crypto.Cipher import AES
from ..Crypto import KEY1, KEY2

# from manager.database.crypto import KEY1, KEY2


def encrypt():
    pass


def decrypt():
    pass


# normalKey = b"@9+nk2vl%^3d12er"
# secretKey = b"hjj32498r&*T&)(*"  # only for secret with storing


# class Encryption:  # for none encrypted
#     def __init__(self, mode, plainText):
#         """
#         You should avoid ' ' in the end before using class
#         mode 1: first layer encryption
#         mode 2: second layer encryption
#         """
#         self.__key = self.__getKey(mode)
#         self.__plainText = self.__make8(plainText)

#     def __getKey(self, mode):
#         if mode == 1:
#             return normalKey
#         elif mode == 2:
#             return secretKey

#     def __make8(self, plainText):
#         while len(plainText) % 8 != 0:
#             plainText += " "
#         return plainText

#     def encrypt(self):
#         """
#         Output:
#         nonce, encrypted, tag
#         """
#         cipher = AES.new(self.__key, AES.MODE_EAX)  # make des class
#         nonce = cipher.nonce
#         encrypted = ""
#         encrypted, tag = cipher.encrypt_and_digest(
#             self.__plainText.encode("utf-8")
#         )  # encrypting
#         return (nonce, encrypted, tag)


# class Decryption:  # for stored 2-way encrypted
#     def __init__(self, mode, nonce, encrypted, tag):
#         """
#         mode 1: first layer encryption
#         mode 2: second layer encryption
#         """
#         self.__key = self.__getKey(mode)
#         self.__encrypted = encrypted
#         self.__nonce = nonce
#         self.__tag = tag

#     def __getKey(self, mode):
#         if mode == 1:
#             return normalKey
#         elif mode == 2:
#             return secretKey

#     def decrypt(self):
#         cipher = AES.new(self.__key, AES.MODE_EAX, nonce=self.__nonce)  # make des class
#         plainText = ""
#         plainText = cipher.decrypt(self.__encrypted).decode().rstrip(" ")  # decrypting
#         try:
#             cipher.verify(self.__tag)
#             print("The message is authentic")
#         except ValueError:
#             print("Key incorrect or message corrupted")
#         return plainText

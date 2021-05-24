#串口读取
import serial
import time
import numpy as np
import string

#显示图片
import matplotlib.pyplot as plt # plt 用于显示图片
import matplotlib.image as mpimg # mpimg 用于读取图片
import numpy as np
from matplotlib.backend_tools import ToolBase, ToolToggleBase
plt.ion()

com = serial.Serial("COM3",9600)

def Distance_test():
    com.open
    data = com.readline()
    num = str(data,'utf-8')
    int_num = int(num)
    print("int_num:",int_num)
    return num
    com.flush
    com.close

def Picture1():
        picture1 = mpimg.imread('个人距离.bmp') # 读取和代码处于同一目录下的
        picture1.shape #(512, 512, 3)
        distance = int(Distance_test())
        plt.figure(figsize=(16, 9))
        plt.imshow(picture1) # 显示图片
        plt.axis('off') # 不显示坐标轴
        plt.show()  # 打开图片
        plt.pause(1)    # 暂停
        while distance <= 44:
            plt.pause(1)
            distance = int(Distance_test())
        plt.close('all')    # 关闭图像
def Picture2():
        picture2 = mpimg.imread('公共距离.bmp') # 读取和代码处于同一目录下的
        picture2.shape #(512, 512, 3)
        distance = int(Distance_test())
        plt.figure(figsize=(16, 9))
        plt.imshow(picture2) # 显示图片
        plt.axis('off') # 不显示坐标轴
        plt.show()  # 打开图片
        plt.pause(1)    # 暂停
        while (distance > 44 and distance <= 122):
            plt.pause(1)
            distance = int(Distance_test())
        plt.close('all')    # 关闭图像
def Picture3():
        picture3 = mpimg.imread('亲密距离.bmp') # 读取和代码处于同一目录下的
        picture3.shape #(512, 512, 3)
        distance = int(Distance_test())
        plt.figure(figsize=(16, 9))
        plt.imshow(picture3) # 显示图片
        plt.axis('off') # 不显示坐标轴
        plt.show()  # 打开图片
        plt.pause(1)    # 暂停
        while (distance > 122 and distance <= 210):
            plt.pause(1)
            distance = int(Distance_test())
        plt.close('all')    # 关闭图像
def Picture4():
        picture4 = mpimg.imread('社交距离.bmp') # 读取和代码处于同一目录下的
        picture4.shape #(512, 512, 3)
        distance = int(Distance_test())
        plt.figure(figsize=(16, 9))
        plt.imshow(picture4) # 显示图片
        plt.axis('off') # 不显示坐标轴
        plt.show()  # 打开图片
        plt.pause(1)    # 暂停
        while distance > 210:
            plt.pause(1)
            distance = int(Distance_test())
        plt.close('all')    # 关闭图像

while True:
    main_dis=int(Distance_test())
    if main_dis <= 44:
        Picture1()
    elif main_dis > 44 and main_dis <= 122:
        Picture2()
    elif main_dis > 122 and main_dis <= 210:
        Picture3()
    elif main_dis > 210:
        Picture4()












##定义串口
#com = serial.Serial("COM3",9600)

#while True:
    #com.open
    #data = com.readline()
    #num = str(data,'utf-8')
    #int_num = int(num)
    #print("data:",data,"num:",num,"int_num:",int_num)
    #com.flush
    #com.close
    #count_int_num = int_num

    #if int_num < 44:
    #    picture1 = mpimg.imread('1.bmp') # 读取和代码处于同一目录下的
    #    picture1.shape #(512, 512, 3)
    #    plt.figure(figsize=(16, 9))
    #    plt.imshow(picture1) # 显示图片
    #    plt.axis('off') # 不显示坐标轴
    #    plt.show()  # 打开图片
    #    plt.pause(1)    # 暂停
    #    while count_int_num < 44:
    #        com.open
    #        data = com.readline()
    #        num = str(data,'utf-8')
    #        count_int_num = int(num)
    #        com.flush
    #        com.close
    #        print("data:",data,"num:",num,"int_num:",int_num)
    #    plt.close('all')    # 关闭图像
    #elif int_num < 122:
    #    picture2 = mpimg.imread('2.bmp') # 读取和代码处于同一目录下的
    #    picture2.shape #(512, 512, 3)
    #    plt.figure(figsize=(16, 9))
    #    plt.imshow(picture2) # 显示图片
    #    plt.axis('off') # 不显示坐标轴
    #    plt.show()  # 打开图片
    #    plt.pause(1)    # 暂停
    #    while count_int_num < 44:
    #        com.open
    #        data = com.readline()
    #        num = str(data,'utf-8')
    #        count_int_num = int(num)
    #        com.flush
    #        com.close
    #        print("data:",data,"num:",num,"int_num:",int_num)
    #    plt.close('all')    # 关闭图像
    #elif int_num < 210:
    #    picture3 = mpimg.imread('3.bmp') # 读取和代码处于同一目录下的
    #    picture3.shape #(512, 512, 3)
    #    plt.figure(figsize=(16, 9))
    #    plt.imshow(picture3) # 显示图片
    #    plt.axis('off') # 不显示坐标轴
    #    plt.show()  # 打开图片
    #    plt.pause(1)    # 暂停
    #    while count_int_num < 44:
    #        com.open
    #        data = com.readline()
    #        num = str(data,'utf-8')
    #        count_int_num = int(num)
    #        com.flush
    #        com.close
    #        print("data:",data,"num:",num,"int_num:",int_num)
    #    plt.close('all')    # 关闭图像
    #else:
    #    picture4 = mpimg.imread('4.bmp') # 读取和代码处于同一目录下的
    #    picture4.shape #(512, 512, 3)
    #    plt.figure(figsize=(16, 9))
    #    plt.imshow(picture4) # 显示图片
    #    plt.axis('off') # 不显示坐标轴
    #    plt.show()  # 打开图片
    #    plt.pause(1)    # 暂停
    #    while count_int_num < 44:
    #        com.open
    #        data = com.readline()
    #        num = str(data,'utf-8')
    #        count_int_num = int(num)
    #        com.flush
    #        com.close
    #        print("data:",data,"num:",num,"int_num:",int_num)
    #    plt.close('all')    # 关闭图像



#while True:
#    com.open
#    data=com.readline()
#    num=str(data,'utf-8')
#    int_num=int(num)
#    print("data:",data,"num:",num,"int_num:",int_num)

#    if int_num<44:
#        picture1 = mpimg.imread('1.bmp') # 读取和代码处于同一目录下的
#        picture1.shape #(512, 512, 3)
#        plt.imshow(picture1) # 显示图片
#        plt.axis('off') # 不显示坐标轴
#        plt.show()  # 打开图片
#        plt.pause(2)    # 暂停两秒
#        plt.close('all')    # 关闭图像      
#    elif int_num<122:
#        picture2 = mpimg.imread('2.bmp') # 读取和代码处于同一目录下的
#        picture2.shape #(512, 512, 3)
#        plt.imshow(picture2) # 显示图片
#        plt.axis('off') # 不显示坐标轴
#        plt.show()  # 打开图片
#        plt.pause(2)    # 暂停两秒
#        plt.close('all')    # 关闭图像
#    elif int_num<210:
#        picture3 = mpimg.imread('3.bmp') # 读取和代码处于同一目录下的
#        picture3.shape #(512, 512, 3)
#        plt.imshow(picture3) # 显示图片
#        plt.axis('off') # 不显示坐标轴
#        plt.show()  # 打开图片
#        plt.pause(2)    # 暂停两秒
#        plt.close('all')    # 关闭图像
#    else:
#        picture4 = mpimg.imread('4.bmp') # 读取和代码处于同一目录下的
#        picture4.shape #(512, 512, 3)
#        plt.imshow(picture4) # 显示图片
#        plt.axis('off') # 不显示坐标轴
#        plt.show()  # 打开图片
#        plt.pause(2)    # 暂停两秒
#        plt.close('all')    # 关闭图像

#    com.flush
#    com.close


#while True:
#    picture1 = mpimg.imread('1.bmp') # 读取和代码处于同一目录下的
#    picture1.shape #(512, 512, 3)
#    plt.figure(figsize=(16, 9))
#    plt.imshow(picture1) # 显示图片
#    plt.axis('off') # 不显示坐标轴
#    plt.show()  # 打开图片
#    plt.pause(10)    # 暂停
#    plt.close('all')    # 关闭图像
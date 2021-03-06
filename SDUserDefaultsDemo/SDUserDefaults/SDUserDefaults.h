//
//  SDUserDefaults.h
//  staveDemo
//
//  Created by bnqc on 2019/4/19.
//  Copyright © 2019年 Dong. All rights reserved.
//
// 详情博客: https://www.jianshu.com/p/7005244f83b1

#import "SDUserObject.h"
#import "TextModel.h"

@interface SDUserDefaults : SDUserObject

// SDUserDefaults 是用户偏好设置存储单例对象.

+ (instancetype)standardUserDefaults;

// 请在下方添加你所需要保存的属性,注意要遵循NSCoding协议,或者继承于SDCodingObject类 ❗️❗️❗️❗️❗️暂不支持int,float,BOOL等类型❗️❗️❗️❗️❗️

//例如
@property(nonatomic,copy)NSString *name;
@property(nonatomic,copy)NSString *password;
@property(nonatomic,strong)TextModel *testModel;

@end


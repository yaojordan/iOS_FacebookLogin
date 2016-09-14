//
//  ViewController.h
//  FacebookLoginTest
//
//  Created by 姚宇鴻 on 2016/9/12.
//  Copyright © 2016年 JordanYao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FBSDKLoginKit/FBSDKLoginKit.h>
@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet FBSDKLoginButton *loginButton;
@end


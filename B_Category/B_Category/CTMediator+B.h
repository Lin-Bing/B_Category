//
//  CTMediator+B.h
//  B_Category
//
//  Created by linbing on 2018/3/12.
//  Copyright © 2018年 linbing. All rights reserved.
//

#import <CTMediator/CTMediator.h>
#import <UIKit/UIKit.h>


@interface CTMediator (B)

// 获取BViewController
- (UIViewController *)B_viewControllerWithContentText:(NSString *)contentText;

@end

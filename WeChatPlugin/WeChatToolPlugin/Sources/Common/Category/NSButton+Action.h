//
//  NSButton+Action.h
//  WeChatPlugin
//
//  Created by nato on 2017/9/19.
//  Copyright © 2017年 github:natototo. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSButton (Action)
+ (instancetype)tk_buttonWithTitle:(NSString *)title target:(id)target action:(SEL)action;
+ (instancetype)tk_checkboxWithTitle:(NSString *)title target:(id)target action:(SEL)action;

@end

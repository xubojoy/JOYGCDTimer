//
//  UIButton+CountDown.h
//  YBMiniSteward
//
//  Created by xubojoy on 2018/11/5.
//  Copyright © 2018 xubojoy. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^CountDoneBlock)(UIButton *btn);

@interface UIButton (YYAdd)

- (void)countDownWithTime:(NSInteger)timeLine withTitle:(NSString *)title andCountDownTitle:(NSString *)subTitle countDoneBlock:(CountDoneBlock)countDoneBlock isInteraction:(BOOL)isInteraction;

@end

NS_ASSUME_NONNULL_END

//
//  AdPopcornVideoDelegate.h
//  AdPopcornOfferwallLib
//
//  Created by 김민석 on 2016. 6. 15..
//  Copyright © 2016년 minseok,kim. All rights reserved.
//

@protocol AdPopcornVideoDelegate;

@protocol AdPopcornVideoDelegate <NSObject>

@optional

- (void)showVideoGuideViewController;

- (void)replayVideoAd:(BOOL)alreadyRewardCompleted;
@end
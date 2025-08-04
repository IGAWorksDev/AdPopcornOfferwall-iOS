//
//  AdPopcornStyle.h
//  IgaworksAd
//
//  Created by wonje,song on 2014. 5. 19..
//  Copyright (c) 2014년 wonje,song. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AdPopcornStyle : NSObject
@property (nonatomic, copy) NSString *offerwallTitle;
@property (nonatomic, strong) UIColor *mainOfferwallColor;

+ (AdPopcornStyle *)sharedInstance;

@end

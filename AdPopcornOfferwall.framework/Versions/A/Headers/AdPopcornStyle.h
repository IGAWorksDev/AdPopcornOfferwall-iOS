//
//  AdPopcornStyle.h
//  IgaworksAd
//
//  Created by wonje,song on 2014. 5. 19..
//  Copyright (c) 2014년 wonje,song. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/// NSError codes for error domain.
typedef NS_ENUM(NSInteger, AdPopcornThemeColor)
{
    AdPopcornThemeBlueColor = 1,
    AdPopcornThemeRedColor = 2,
    AdPopcornThemeYellowColor = 3
};

@interface AdPopcornStyle : NSObject

@property (nonatomic, unsafe_unretained) AdPopcornThemeColor adPopcornThemeColor;
@property (nonatomic, unsafe_unretained) AdPopcornThemeColor adPopcornTitleTextColor;
@property (nonatomic, unsafe_unretained) AdPopcornThemeColor adPopcornTitleBackgroundColor;

@property (nonatomic, strong) UIColor *adPopcornCustomThemeColor;
@property (nonatomic, copy) NSString *adPopcornCustomOfferwallTitleLogoPath;
@property (nonatomic, copy) NSString *adPopcornCustomOfferwallTitle;
@property (nonatomic, strong) UIColor *adPopcornCustomOfferwallTitleColor;
@property (nonatomic, strong) UIColor *adPopcornCustomOfferwallTitleBackgroundColor;


+ (AdPopcornStyle *)sharedInstance;

@end

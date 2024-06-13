//
//  AdPopcornBenefit.h
//  AdPopcornOfferwallLib
//
//  Created by 김민석 on 6/11/24.
//  Copyright © 2024 AdPopcorn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol AdPopcornBenefitDelegate;

@interface AdPopcornBenefit : NSObject
{
    
}

@property (nonatomic, weak) id<AdPopcornBenefitDelegate> delegate;

/*!
 @abstract
 singleton AdPopcorn 객체를 반환한다.
 */
+ (AdPopcornBenefit *)shared;

/*!
 @abstract
 AdPopcorn appkey, hashkey를 설정한다.
 
 @param appKey 앱키
 @param hashKey 해시키
 */
+ (void)setAppKey:(NSString *)appKey andHashKey:(NSString *)hashKey;

/*!
 @abstract
 Open benefit page.
 
 @discussion
 혜택 탭을 노출한다.
 
 @param vController          광고 리스트를 노출시킬 view controller
 @param delegate             AdPopcornBenefitDelegate
 */
+ (void)openPlacementWithViewController:(UIViewController *)vController placementId:(NSString *)placementId delegate:(id)delegate;

@end

@protocol AdPopcornBenefitDelegate <NSObject>

@optional

- (void)APBenefitPlacementLoadSuccess;
- (void)APBenefitPlacementLoadFail:(NSString *)errorMessage;

@end

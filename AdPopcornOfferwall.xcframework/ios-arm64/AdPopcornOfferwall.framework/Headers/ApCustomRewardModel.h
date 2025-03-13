//
//  ApCustomRewardModel.h
//  AdPopcornOfferwallLib
//
//  Created by 김민석 on 2025/03/10.
//  Copyright © 2025 AdPopcorn. All rights reserved.
//

#ifndef ApCustomRewardModel_h
#define ApCustomRewardModel_h

#import <Foundation/Foundation.h>

@interface ApCustomRewardModel : NSObject

#endif /* ApCustomRewardModel_h */
@property (nonatomic, copy) NSString *campaignKey;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *iconImageURL;
@property (nonatomic, copy) NSString *mainImageURL;
@property (nonatomic, unsafe_unretained) long reward;
@end

//
//  ApCustomRewardCPMModel.h
//  AdPopcornOfferwallLib
//
//  Created by 김민석 on 2024/03/12.
//  Copyright © 2024 AdPopcorn. All rights reserved.
//

#ifndef ApCustomRewardCPMModel_h
#define ApCustomRewardCPMModel_h

#import <Foundation/Foundation.h>

@interface ApCustomRewardCPMModel : NSObject

#endif /* ApCustomRewardCPMModel_h */
@property (nonatomic, copy) NSString *contentsId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *condition;
@property (nonatomic, copy) NSString *cta;
@property (nonatomic, copy) NSString *imageURL;
@property (nonatomic, unsafe_unretained) int reward;
@end

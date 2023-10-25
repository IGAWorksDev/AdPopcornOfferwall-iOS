//
//  APError.h
//  AdPopcornOfferwallLib
//
//  Created by 김민석 on 2016. 6. 14..
//  Copyright © 2016년 wonje,song. All rights reserved.
//

#import <Foundation/Foundation.h>

// AP error domain
extern NSString *const kAPErrorDomain;


// NSError codes for AP error domain.
typedef NS_ENUM(NSInteger, APErrorCode){
    APException = 200,
    APABUSING = 500,
    APEmptyCampaign = 1000,
    APInvalidMediaKey = 1400,
    APUserKeyMissing = 2250,
    
    APTerminatedOrInvalidCampaign = 999,
    APCompletedCampaign = 2000,
    
    APServerTimeout = 5000,
    APAllLoadedVideoShown = 5005,
    APUnknownException = 9999
};

@interface APError : NSError

@end


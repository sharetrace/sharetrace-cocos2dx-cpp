//
//  WakeupAppDataHolder.h
//  cocos-cpp
//
// Created by Sharetrace on 2020/1/27.
//

#import <Foundation/Foundation.h>
#import <SharetraceSDK/SharetraceSDK.h>

@interface WakeupAppDataHolder : NSObject<SharetraceDelegate>

+ (WakeupAppDataHolder *) shareInstance;

@end


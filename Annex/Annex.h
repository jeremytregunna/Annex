//
//  Annex.h
//  Annex
//
//  Created by Wess Cope on 2/20/13.
//  Copyright (c) 2013 Wess Cope. All rights reserved.
//


#ifndef _ANNEX_H
#define _ANNEX_H

#import "NSObject+Annex.h"
#import "NSDate+Annex.h"
#import "NSString+Annex.h"
#import "NSDictionary+Annex.h"
#import "NSArray+Annex.h"
#import "UIColor+Annex.h"
#import "UIView+Annex.h"
#import "UIButton+Annex.h"
#import "UITextView+Annex.h"
#import "UIImage+Annex.h"
#import "UIImageView+Annex.h"
#import "UIAlertView+Annex.h"

// Shortcuts
#define AnnexAppVersion         [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
#define AnnexAppBundleVersion   [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"]
#define AnnexAppExecutable      [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleExecutable"]
#define AnnexAppName            [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleName"]
#define AnnexSystemName         [[UIDevice currentDevice] systemName]
#define AnnexSystemVersion      [[UIDevice currentDevice] systemVersion]
#define AnnexDeviceType         [[UIDevice currentDevice] model]

#define ANNEX_IS_IPHONE_5             (fabs((double)[[UIScreen mainScreen] bounds].size.height - (double)568 ) < DBL_EPSILON)
#define ANNEX_SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define ANNEX_SUPPRESS_DEPRECIATED_DECLARATIONS(code) \
do { \
    _Pragma("clang diagnostic push") \
    _Pragma("clang \"-Wdeprecated-declarations\""); \
    code; \
    _Pragma("clang diagnostic pop"); \
} while(0);

#ifdef DEBUG
#define ALog(fmt, ...) ({ NSLog(@"-- [%s:%d] %s: " fmt, __FILE__, __LINE__, __PRETTY_FUNCTION__, ## __VA_ARGS__); })
#else
#define ALog(fmt, ...)
#endif

#endif


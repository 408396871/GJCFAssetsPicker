//
//  GJCFStringUitil.h
//  GJCommonFoundation
//
//  Created by ZYVincent on 14-10-16.
//  Copyright (c) 2014年 ZYProSoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@interface GJCFStringUitil : NSObject

+ (BOOL)stringIsNull:(NSString *)string;

+ (BOOL)stringIsAllWhiteSpace:(NSString *)string;

+ (BOOL)stringToBool:(NSString*)sourceString;

+ (NSInteger)stringToInt:(NSString*)sourceString;

+ (CGFloat)stringToFloat:(NSString*)sourceString;

+ (double)stringToDouble:(NSString*)sourceString;

+ (NSString *)boolToString:(BOOL)boolValue;

+ (NSString *)intToString:(NSInteger)intValue;

+ (NSString *)floatToString:(CGFloat)floatValue;

+ (NSString *)doubleToString:(double)doubleValue;

+ (BOOL)stringIsValidateEmailAddress:(NSString *)string;

+ (BOOL)stringISValidateMobilePhone:(NSString *)string;

+ (BOOL)stringIsValidatePhone:(NSString *)string;

+ (BOOL)stringIsValidateMailCode:(NSString *)string;

+ (BOOL)stringIsAllChineseWord:(NSString *)string;

+ (BOOL)stringISValidateCarNumber:(NSString *)string;

+ (BOOL)stringIsValidateUrl:(NSString *)string;

+ (BOOL)stringISValidatePersonCardNumber:(NSString *)string;

+ (BOOL)stringJustHasNumberAndCharacter:(NSString *)string;

+ (BOOL)stringJustHasNumber:(NSString *)string;

+ (BOOL)stringChineseNumberCharacterOnly:(NSString *)string;

+ (NSString*)stringFromFile:(NSString*)path;

+ (NSString*)currentTimeStampString;

+ (NSString *)unarchieveFromPath:(NSString *)filePath;

+ (NSString *)MD5:(NSString *)string;

+ (NSString *)stringByTrimingLeadingWhiteSpace:(NSString *)string;

+ (NSString *)stringByTrimingTailingWhiteSpace:(NSString *)string;

+ (NSString *)stringByTrimingWhiteSpace:(NSString *)string;

+ (NSString *)urlEncode:(id)object;

+ (NSString *)encodeStringFromDict:(NSDictionary *)dict;

+ (NSRange)stringRange:(NSString *)string;


@end

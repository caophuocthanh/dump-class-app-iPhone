//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaLangEnum.h"

#import "NSCopying.h"

@class ComGoogleAppsBigtopServicesSettingsCommonSettingTypeEnum;

@interface ComGoogleAppsBigtopServicesSettingsCommonClientExperimentIdEnum : JavaLangEnum <NSCopying>
{
    int idNumber_;
    ComGoogleAppsBigtopServicesSettingsCommonSettingTypeEnum *settingType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_fromIdNumberWithInt_;
+ (void)initialize;
+ (id)valueOfWithNSString:(id)arg1;
+ (id)values;
+ (id)fromIdNumberWithInt:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getSettingType;
- (int)getIdNumber;
- (id)initWithInt:(int)arg1 withComGoogleAppsBigtopServicesSettingsCommonSettingTypeEnum:(id)arg2 withNSString:(id)arg3 withInt:(int)arg4;

@end


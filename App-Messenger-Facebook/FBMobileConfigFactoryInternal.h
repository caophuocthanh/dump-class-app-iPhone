//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMobileConfigFactory.h"

@interface FBMobileConfigFactoryInternal : FBMobileConfigFactory
{
    struct FBMobileConfigManager *_manager;
}

- (struct FBMobileConfigManager *)getManager;
- (id)initWithManager:(struct FBMobileConfigManager *)arg1;

@end

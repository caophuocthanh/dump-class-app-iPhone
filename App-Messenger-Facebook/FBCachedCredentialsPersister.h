//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBKeychainItemController;

@interface FBCachedCredentialsPersister : NSObject
{
    FBKeychainItemController *_keychainController;
    void *_keychainAccessibleAttribute;
}

- (void).cxx_destruct;
- (void)ensureAvailability;
- (void)clearCachedCredentialsWithCompletion:(CDUnknownBlockType)arg1;
- (void)persistCachedCredentials:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithKeychainController:(id)arg1 availability:(unsigned int)arg2;
- (id)init;

@end

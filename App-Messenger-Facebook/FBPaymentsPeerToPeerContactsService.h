//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBPaymentsPeerToPeerContactsService : NSObject
{
    id <MNContactPluginService> _contactPluginService;
}

- (void).cxx_destruct;
- (void)loadUsersWithFBIDs:(id)arg1 successCallback:(CDUnknownBlockType)arg2 failureCallback:(CDUnknownBlockType)arg3;
- (id)initWithContactPluginService:(id)arg1;

@end


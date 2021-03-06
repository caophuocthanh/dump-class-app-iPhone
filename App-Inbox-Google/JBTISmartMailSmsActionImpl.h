//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTSmsAction.h"

@class JBTISmartMailSmartMailComponentContextImpl, JCSAssignedId, NSString;

@interface JBTISmartMailSmsActionImpl : NSObject <JBTSmsAction>
{
    NSString *name_;
    id <JavaUtilList> phoneNumbers_;
    JBTISmartMailSmartMailComponentContextImpl *smartMailContext_;
    JCSAssignedId *assignedId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_assignedId_;
+ (id)__annotations_initWithNSString_withJavaUtilList_withJBTISmartMailSmartMailComponentContextImpl_withJCSAssignedId__params;
- (void)dealloc;
- (void)recordClick;
- (id)getPhoneNumbers;
- (id)getActionType;
- (id)getName;
- (id)initWithNSString:(id)arg1 withJavaUtilList:(id)arg2 withJBTISmartMailSmartMailComponentContextImpl:(id)arg3 withJCSAssignedId:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


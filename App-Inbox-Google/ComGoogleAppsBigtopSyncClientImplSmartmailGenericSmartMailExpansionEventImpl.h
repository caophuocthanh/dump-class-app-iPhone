//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTICommonEventImpl.h"

#import "JBTExpandableElement_ExpansionEvent.h"

@class NSString;

@interface ComGoogleAppsBigtopSyncClientImplSmartmailGenericSmartMailExpansionEventImpl : JBTICommonEventImpl <JBTExpandableElement_ExpansionEvent>
{
    id <JBTId> id__;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getId;
- (id)initWithJBTId:(id)arg1 withJBTEvent_TypeEnum:(id)arg2 withJBTSpan:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


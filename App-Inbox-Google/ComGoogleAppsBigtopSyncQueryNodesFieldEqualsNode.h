//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncQueryNodesNode.h"

@class NSString;

@interface ComGoogleAppsBigtopSyncQueryNodesFieldEqualsNode : NSObject <ComGoogleAppsBigtopSyncQueryNodesNode>
{
    NSString *field_;
    id <ComGoogleAppsBigtopSyncQueryNodesValueNode> value_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)getNodeType;
- (id)getValue;
- (id)getField;
- (void)setValueWithComGoogleAppsBigtopSyncQueryNodesValueNode:(id)arg1;
- (void)setFieldWithNSString:(id)arg1;
- (id)initWithNSString:(id)arg1 withComGoogleAppsBigtopSyncQueryNodesValueNode:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


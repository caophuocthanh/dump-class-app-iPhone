//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiObjectHandle.h"
#import "JavaLangComparable.h"

@class ComGoogleCumulusCommonBaseProto_ObjectId, NSString;

@interface ComGoogleCumulusFrameworkObjectHandleImpl : NSObject <ComGoogleCumulusApiObjectHandle, JavaLangComparable>
{
    NSString *identity_;
    ComGoogleCumulusCommonBaseProto_ObjectId *permanentIdProto_;
    ComGoogleCumulusCommonBaseProto_ObjectId *temporaryIdProto_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_temporaryIdProto_;
+ (id)__annotations_permanentIdProto_;
+ (id)__annotations_equalsWithId__params;
+ (id)__annotations_getPermanentId;
+ (id)createForTestWithNSString:(id)arg1;
+ (id)getObjectIdProtoWithComGoogleCumulusApiObjectHandle:(id)arg1;
+ (id)deserializeHandleWithNSString:(id)arg1;
+ (id)serializeIdWithComGoogleCumulusCommonBaseProto_ObjectId:(id)arg1;
- (void)dealloc;
- (id)getNonNullPermanentIdProto;
- (int)compareToWithId:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)getObjectIdProto;
- (void)updateIdWithComGoogleCumulusCommonBaseProto_ObjectId:(id)arg1;
- (id)serialize;
- (id)getPermanentId;
- (BOOL)isPermanent;
- (id)initWithComGoogleCumulusCommonBaseProto_ObjectId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


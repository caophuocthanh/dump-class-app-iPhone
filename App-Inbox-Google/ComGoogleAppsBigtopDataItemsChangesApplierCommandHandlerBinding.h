//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCommonCollectImmutableSet, ComGoogleProtobufExtensionLite;

@interface ComGoogleAppsBigtopDataItemsChangesApplierCommandHandlerBinding : NSObject
{
    ComGoogleCommonCollectImmutableSet *context_;
    ComGoogleProtobufExtensionLite *commandExt_;
    id <DaggerLazy> commandHandler_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations;
+ (void)initialize;
- (void)dealloc;
- (id)applyRemoteChangeWithComGoogleProtobufMessageLite:(id)arg1 withComGoogleCumulusTypeTypeProto_Command:(id)arg2;
- (id)applyLocalChangeWithComGoogleProtobufMessageLite:(id)arg1 withComGoogleCumulusTypeTypeProto_Command:(id)arg2;
- (id)getExtension;
- (BOOL)canApplyRemoteCommandWithComGoogleCumulusTypeTypeProto_Command:(id)arg1;
- (BOOL)canApplyLocalCommandWithComGoogleCumulusTypeTypeProto_Command:(id)arg1;
- (id)initWithComGoogleCommonCollectImmutableSet:(id)arg1 withComGoogleProtobufExtensionLite:(id)arg2 withDaggerLazy:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufGeneratedMessage_ExtendableMessageOrBuilder.h"

@class ComGoogleProtobufDescriptorProtos_FieldOptions_CTypeEnum, ComGoogleProtobufDescriptorProtos_FieldOptions_JSTypeEnum, ComGoogleProtobufDescriptorProtos_FieldOptions_JTypeEnum, ComGoogleProtobufDescriptorProtos_FieldOptions_UpgradedOption, ComGoogleProtobufDescriptorProtos_UninterpretedOption;

@protocol ComGoogleProtobufDescriptorProtos_FieldOptionsOrBuilder <ComGoogleProtobufGeneratedMessage_ExtendableMessageOrBuilder>
- (ComGoogleProtobufDescriptorProtos_UninterpretedOption *)getUninterpretedOptionWithInt:(int)arg1;
- (id <JavaUtilList>)getUninterpretedOptionList;
- (int)getUninterpretedOptionCount;
- (BOOL)getDeprecatedRawMessage;
- (BOOL)hasDeprecatedRawMessage;
- (ComGoogleProtobufDescriptorProtos_FieldOptions_UpgradedOption *)getUpgradedOptionWithInt:(int)arg1;
- (id <JavaUtilList>)getUpgradedOptionList;
- (int)getUpgradedOptionCount;
- (BOOL)getWeak;
- (BOOL)hasWeak;
- (BOOL)getDeprecated;
- (BOOL)hasDeprecated;
- (BOOL)getLazy;
- (BOOL)hasLazy;
- (ComGoogleProtobufDescriptorProtos_FieldOptions_JSTypeEnum *)getJstype;
- (BOOL)hasJstype;
- (ComGoogleProtobufDescriptorProtos_FieldOptions_JTypeEnum *)getJtype;
- (BOOL)hasJtype;
- (BOOL)getPacked;
- (BOOL)hasPacked;
- (ComGoogleProtobufDescriptorProtos_FieldOptions_CTypeEnum *)getCtype;
- (BOOL)hasCtype;
@end


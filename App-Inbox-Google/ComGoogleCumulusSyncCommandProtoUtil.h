//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ComGoogleCumulusSyncCommandProtoUtil : NSObject
{
}

+ (void)initialize;
+ (id)getSafeFullStateCommandWithComGoogleCumulusCommandCommandProto_LogResponse:(id)arg1;
+ (void)addToServerFullStateObjectMapWithJavaUtilMap:(id)arg1 withComGoogleCumulusCommandCommandProto_Response:(id)arg2 withBoolean:(BOOL)arg3 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg4;
+ (id)createFullStateObjectMapWithComGoogleCumulusCommandCommandProto_Response:(id)arg1;
+ (void)appendWithJavaLangStringBuilder:(id)arg1 withJavaUtilCollection:(id)arg2;
+ (id)newDumperWithNSString:(id)arg1 withComGoogleCumulusCommandCommandProto_Response:(id)arg2;
+ (id)newDumperWithNSString:(id)arg1 withComGoogleCumulusCommandCommandProto_Request:(id)arg2;
+ (id)dumpWithNSString:(id)arg1 withComGoogleCumulusTypeTypeProto_Command:(id)arg2;
+ (id)dumpWithNSString:(id)arg1 withComGoogleCumulusCommandCommandProto_BatchStatus:(id)arg2;
+ (id)dumpWithNSString:(id)arg1 withComGoogleCumulusCommandCommandProto_LogResponse:(id)arg2;
+ (id)dumpWithNSString:(id)arg1 withComGoogleCumulusCommandCommandProto_Response:(id)arg2;
+ (id)dumpWithNSString:(id)arg1 withComGoogleCumulusCommandCommandProto_LogRequest:(id)arg2;
+ (id)dumpWithNSString:(id)arg1 withComGoogleCumulusCommandCommandProto_Request:(id)arg2;
+ (BOOL)hasIllegalInsertOperationTypeWithComGoogleCumulusTypeTypeProto_Command:(id)arg1;
+ (BOOL)hasIllegalAppendOperationTypeWithComGoogleCumulusTypeTypeProto_Command:(id)arg1;
+ (void)validateNewPendingCommandsWithJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2;
+ (BOOL)isCommandFirstCreateRequestWithComGoogleCumulusCommandCommandProto_LogRequest:(id)arg1 withComGoogleCumulusTypeTypeProto_Command:(id)arg2;
- (id)init;

@end


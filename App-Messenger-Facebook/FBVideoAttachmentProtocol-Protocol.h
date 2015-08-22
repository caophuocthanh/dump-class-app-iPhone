//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMediaAttachmentProtocol.h"
#import "NSCoding.h"

@class FBVideoAsset, FBVideoExportConfig, NSString, NSURL;

@protocol FBVideoAttachmentProtocol <FBMediaAttachmentProtocol, NSCoding>
@property(readonly, nonatomic) unsigned int quality;
@property(readonly, nonatomic) FBVideoAsset *videoAsset;
@property(nonatomic) unsigned int indexHint;
@property(readonly, copy, nonatomic) NSString *dataSourceID;
@property(readonly, nonatomic) BOOL requiresProcessing;
@property(readonly, nonatomic) double bitrateKbps;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) long long estimatedOutputFileLength;
@property(readonly, nonatomic) NSString *outputFileType;
@property(readonly, nonatomic) NSString *presetName;
@property(retain, nonatomic) NSURL *videoURL;
- (void)cancelExportVideoDataWithCompletionBlock:(void (^)(void))arg1;
- (void)removeTemporaryExportFile;
- (void)exportVideoDataWithProgress:(void (^)(float))arg1 completion:(void (^)(NSError *))arg2 baseURL:(NSURL *)arg3 customTranscoding:(BOOL)arg4 videoExportConfig:(FBVideoExportConfig *)arg5 errorSimulation:(id <FBErrorSimulationProtocol>)arg6 timeRange:(CDStruct_e83c9415)arg7;
- (void)exportVideoDataWithProgress:(void (^)(float))arg1 completion:(void (^)(NSError *))arg2 baseURL:(NSURL *)arg3 customTranscoding:(BOOL)arg4 videoExportConfig:(FBVideoExportConfig *)arg5 errorSimulation:(id <FBErrorSimulationProtocol>)arg6;
@end

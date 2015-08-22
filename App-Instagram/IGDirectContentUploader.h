//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGDirectContentUploader : NSObject
{
}

+ (void)removeUpload:(id)arg1;
+ (void)retryUpload:(id)arg1 progress:(CDUnknownBlockType)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (id)internalUploadsForThreadWithID:(id)arg1;
+ (id)uploadsForThreadWithID:(id)arg1;
+ (id)uploadVideoWithID:(id)arg1 videoResult:(id)arg2 withText:(id)arg3 toRecipient:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
+ (id)uploadVideo:(id)arg1 toRecipient:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (id)uploadPhotoWithID:(id)arg1 withText:(id)arg2 toRecipient:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
+ (id)uploadImage:(id)arg1 toRecipient:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (id)uploadLocation:(id)arg1 withText:(id)arg2 toRecipient:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
+ (id)uploadProfile:(id)arg1 withText:(id)arg2 toRecipient:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
+ (id)uploadHashtag:(id)arg1 withText:(id)arg2 toRecipient:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
+ (id)uploadMediaReshareId:(id)arg1 withMediaType:(int)arg2 withText:(id)arg3 toRecipient:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
+ (id)threadIDFromRecipient:(id)arg1;
+ (void)configureUpload:(id)arg1 withText:(id)arg2 toRecipient:(id)arg3;
+ (id)uploadLikeToRecipient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)uploadText:(id)arg1 toRecipient:(id)arg2 progress:(CDUnknownBlockType)arg3 withCompletion:(CDUnknownBlockType)arg4;
+ (void)updateThreadStoreWithResponse:(id)arg1;
+ (void)sendUpload:(id)arg1 withProgress:(CDUnknownBlockType)arg2 andCompletion:(CDUnknownBlockType)arg3;
+ (void)sendRealtimeTextUpload:(id)arg1 withProgress:(CDUnknownBlockType)arg2 andCompletion:(CDUnknownBlockType)arg3;
+ (id)paramsFromDict:(id)arg1 forUpload:(id)arg2;
+ (void)clearUpload:(id)arg1;
+ (void)saveUpload:(id)arg1;
+ (id)uploadsBaseDirectoryForThreadId:(id)arg1;
+ (id)uploadsBaseDirectory;
+ (id)allUploadsByThreadId;
+ (id)inflightUploads;

@end


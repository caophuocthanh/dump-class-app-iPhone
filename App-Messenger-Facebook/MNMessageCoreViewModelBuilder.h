//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMSticker, FBMStringWithRedactedDescription, MNAudioAttachmentViewModel, MNVideoAttachmentViewModel, NSArray, NSDate, NSObject<NSCopying>, NSString;

@interface MNMessageCoreViewModelBuilder : NSObject
{
    unsigned int _messageContentType;
    unsigned int _messageRowType;
    NSString *_senderId;
    BOOL _isFromMe;
    unsigned long long _sendOrServerTimestamp;
    NSDate *_timestampDate;
    FBMStringWithRedactedDescription *_messageBody;
    BOOL _isMessageBodyFiltered;
    NSArray *_photoViewModels;
    MNAudioAttachmentViewModel *_audioAttachmentViewModel;
    MNVideoAttachmentViewModel *_videoAttachmentViewModel;
    NSArray *_fileAttachments;
    NSObject<NSCopying> *_attachmentViewModel_DO_NOT_USE;
    NSString *_attachmentStyle;
    BOOL _isForwardable;
    FBMSticker *_sticker;
    int _bubbleStyle;
    BOOL _bubbleCanBeGrouped;
    unsigned int _messageTextFontStyle;
}

+ (id)messageCoreViewModelFromExistingMessageCoreViewModel:(id)arg1;
+ (id)messageCoreViewModel;
- (void).cxx_destruct;
- (id)withMessageTextFontStyle:(unsigned int)arg1;
- (id)withBubbleCanBeGrouped:(BOOL)arg1;
- (id)withBubbleStyle:(int)arg1;
- (id)withSticker:(id)arg1;
- (id)withIsForwardable:(BOOL)arg1;
- (id)withAttachmentStyle:(id)arg1;
- (id)withAttachmentViewModel_DO_NOT_USE:(id)arg1;
- (id)withFileAttachments:(id)arg1;
- (id)withVideoAttachmentViewModel:(id)arg1;
- (id)withAudioAttachmentViewModel:(id)arg1;
- (id)withPhotoViewModels:(id)arg1;
- (id)withIsMessageBodyFiltered:(BOOL)arg1;
- (id)withMessageBody:(id)arg1;
- (id)withTimestampDate:(id)arg1;
- (id)withSendOrServerTimestamp:(unsigned long long)arg1;
- (id)withIsFromMe:(BOOL)arg1;
- (id)withSenderId:(id)arg1;
- (id)withMessageRowType:(unsigned int)arg1;
- (id)withMessageContentType:(unsigned int)arg1;
- (id)build;

@end


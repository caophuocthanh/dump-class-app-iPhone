//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBMStringWithRedactedDescription, NSString;

@interface FBMThreadSnippet : FBValueObject <NSCopying, NSCoding>
{
    BOOL _isUserText;
    NSString *_messageId;
    NSString *_senderId;
    FBMStringWithRedactedDescription *_text;
    unsigned long long _timestamp;
}

@property(readonly, nonatomic) BOOL isUserText; // @synthesize isUserText=_isUserText;
@property(readonly, copy, nonatomic) FBMStringWithRedactedDescription *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *senderId; // @synthesize senderId=_senderId;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (id)initWithMessageId:(id)arg1 timestamp:(unsigned long long)arg2 senderId:(id)arg3 text:(id)arg4 isUserText:(BOOL)arg5;

@end


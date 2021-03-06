//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class FBMessageOutgoingAttribution, FBOutgoingGraphMessage, NSArray;

@interface MNForwardContentMessage : FBValueObject <NSCopying>
{
    FBOutgoingGraphMessage *_outgoingGraphMessage;
    NSArray *_outgoingAttachments;
    FBMessageOutgoingAttribution *_outgoingAttribution;
}

@property(readonly, copy, nonatomic) FBMessageOutgoingAttribution *outgoingAttribution; // @synthesize outgoingAttribution=_outgoingAttribution;
@property(readonly, copy, nonatomic) NSArray *outgoingAttachments; // @synthesize outgoingAttachments=_outgoingAttachments;
@property(readonly, copy, nonatomic) FBOutgoingGraphMessage *outgoingGraphMessage; // @synthesize outgoingGraphMessage=_outgoingGraphMessage;
- (void).cxx_destruct;
- (id)initWithOutgoingGraphMessage:(id)arg1 outgoingAttachments:(id)arg2 outgoingAttribution:(id)arg3;

@end


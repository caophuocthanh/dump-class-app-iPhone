//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, STPBankAccount, STPCard;

@interface STPToken : NSObject
{
    BOOL _livemode;
    NSString *_tokenId;
    STPCard *_card;
    STPBankAccount *_bankAccount;
    NSDate *_created;
}

@property(readonly, nonatomic) NSDate *created; // @synthesize created=_created;
@property(readonly, nonatomic) STPBankAccount *bankAccount; // @synthesize bankAccount=_bankAccount;
@property(readonly, nonatomic) STPCard *card; // @synthesize card=_card;
@property(readonly, nonatomic) BOOL livemode; // @synthesize livemode=_livemode;
@property(readonly, nonatomic) NSString *tokenId; // @synthesize tokenId=_tokenId;
- (void).cxx_destruct;
- (BOOL)isEqualToToken:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)postToURL:(id)arg1 withParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)description;
- (id)initWithAttributeDictionary:(id)arg1;

@end


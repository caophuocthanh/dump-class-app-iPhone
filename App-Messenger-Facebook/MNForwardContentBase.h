//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "MNForwardContentProtocol.h"

@class NSString;

@interface MNForwardContentBase : FBValueObject <MNForwardContentProtocol>
{
    unsigned int _enumType;
}

@property(readonly, nonatomic) unsigned int enumType; // @synthesize enumType=_enumType;
- (id)initWithForwardContentType:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


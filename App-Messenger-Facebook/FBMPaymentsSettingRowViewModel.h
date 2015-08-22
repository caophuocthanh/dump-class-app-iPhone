//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBMPaymentsSettingRowViewModel : FBValueObject <NSCopying>
{
    NSString *_cellIdentifier;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
    NSString *_targetIdentifier;
}

@property(readonly, copy, nonatomic) NSString *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
@property(readonly, copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, copy, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
- (void).cxx_destruct;
- (id)initWithCellIdentifier:(id)arg1 localizedTitle:(id)arg2 localizedDescription:(id)arg3 targetIdentifier:(id)arg4;

@end

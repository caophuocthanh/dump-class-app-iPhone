//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPlainTableViewCell.h"

@class UILabel;

@interface IGUserBioInfoCell : IGPlainTableViewCell
{
    UILabel *_bioInfoLabel;
}

+ (id)styledStringForFullName:(id)arg1 bioInfo:(id)arg2 forPK:(id)arg3 withWidth:(float)arg4;
+ (id)validateString:(id)arg1;
@property(retain, nonatomic) UILabel *bioInfoLabel; // @synthesize bioInfoLabel=_bioInfoLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (float)setUserFullName:(id)arg1 bioInfo:(id)arg2 forPK:(id)arg3 withWidth:(float)arg4;
- (id)initWithReuseIdentifier:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMediaPickerSession, NSString;

@interface FBMediaGalleryTopBarConfiguration : NSObject
{
    BOOL _selectButtonEnabled;
    BOOL _backButtonHidden;
    unsigned int _selectionTitleValue;
    unsigned int _backButtonStyle;
    FBMediaPickerSession *_session;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) FBMediaPickerSession *session; // @synthesize session=_session;
@property(nonatomic) BOOL backButtonHidden; // @synthesize backButtonHidden=_backButtonHidden;
@property(nonatomic) BOOL selectButtonEnabled; // @synthesize selectButtonEnabled=_selectButtonEnabled;
@property(nonatomic) unsigned int backButtonStyle; // @synthesize backButtonStyle=_backButtonStyle;
@property(nonatomic) unsigned int selectionTitleValue; // @synthesize selectionTitleValue=_selectionTitleValue;
- (void).cxx_destruct;
- (id)initWithSelectionTitleValue:(unsigned int)arg1 backButtonStyle:(unsigned int)arg2 selectButtonEnabled:(BOOL)arg3 backButtonHidden:(BOOL)arg4 title:(id)arg5 session:(id)arg6;

@end

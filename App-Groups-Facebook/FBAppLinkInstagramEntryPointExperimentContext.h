//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@class NSString;

@interface FBAppLinkInstagramEntryPointExperimentContext : FBExperimentContext
{
    BOOL _showInstallGlyph;
    BOOL _showViewGlyph;
    BOOL _showInstallTextLink;
    BOOL _showViewTextLink;
    BOOL _showInstallPhotoLink;
    BOOL _showViewPhotoLink;
    NSString *_glyphOpenTarget;
    NSString *_textLinkOpenTarget;
    NSString *_photoLinkOpenTarget;
}

+ (id)parameterConfigurations;
+ (id)experimentName;
@property(copy, nonatomic) NSString *photoLinkOpenTarget; // @synthesize photoLinkOpenTarget=_photoLinkOpenTarget;
@property(copy, nonatomic) NSString *textLinkOpenTarget; // @synthesize textLinkOpenTarget=_textLinkOpenTarget;
@property(copy, nonatomic) NSString *glyphOpenTarget; // @synthesize glyphOpenTarget=_glyphOpenTarget;
@property(readonly, nonatomic) BOOL showViewPhotoLink; // @synthesize showViewPhotoLink=_showViewPhotoLink;
@property(readonly, nonatomic) BOOL showInstallPhotoLink; // @synthesize showInstallPhotoLink=_showInstallPhotoLink;
@property(readonly, nonatomic) BOOL showViewTextLink; // @synthesize showViewTextLink=_showViewTextLink;
@property(readonly, nonatomic) BOOL showInstallTextLink; // @synthesize showInstallTextLink=_showInstallTextLink;
@property(readonly, nonatomic) BOOL showViewGlyph; // @synthesize showViewGlyph=_showViewGlyph;
@property(readonly, nonatomic) BOOL showInstallGlyph; // @synthesize showInstallGlyph=_showInstallGlyph;
- (void).cxx_destruct;
- (BOOL)shouldShowInstagramAppLinkFor:(id)arg1 openGraphIOSURLStrings:(id)arg2 linkType:(unsigned int)arg3;
- (unsigned int)openTargetTypeForString:(id)arg1;
@property(readonly, nonatomic) unsigned int photoLinkOpenTargetType;
@property(readonly, nonatomic) unsigned int textLinkOpenTargetType;
@property(readonly, nonatomic) unsigned int glyphOpenTargetType;

@end


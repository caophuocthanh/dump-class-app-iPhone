//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol ZZArchiveEntryWriter
- (BOOL)writeCentralFileHeaderToChannelOutput:(id <ZZChannelOutput>)arg1 error:(out id *)arg2;
- (BOOL)writeLocalFileToChannelOutput:(id <ZZChannelOutput>)arg1 withInitialSkip:(unsigned int)arg2 error:(out id *)arg3;
- (unsigned int)offsetToLocalFileEnd;
@end


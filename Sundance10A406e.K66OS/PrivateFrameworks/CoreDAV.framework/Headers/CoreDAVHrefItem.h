/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVLeafItem.h"

@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem {
	NSURL *_baseURL;	// 28 = 0x1c
	int _writeStyle;	// 32 = 0x20
}
@property(retain) NSURL *baseURL;	// G=0x303d003d; S=0x303d0051; @synthesize=_baseURL
@property(assign) int writeStyle;	// G=0x303d0061; S=0x303d0075; @synthesize=_writeStyle
- (id)init;	// 0x303cfa85
- (id)initWithURL:(id)url;	// 0x303cfacd
// declared property getter: - (id)baseURL;	// 0x303d003d
- (void)dealloc;	// 0x303cfb11
- (id)description;	// 0x303cfb5d
- (void)parserSuggestsBaseURL:(id)url;	// 0x303d002d
- (id)payloadAsFullURL;	// 0x303cfdc1
- (id)payloadAsOriginalURL;	// 0x303cffe5
// declared property setter: - (void)setBaseURL:(id)url;	// 0x303d0051
// declared property setter: - (void)setWriteStyle:(int)style;	// 0x303d0075
- (void)write:(id)write;	// 0x303cfc5d
// declared property getter: - (int)writeStyle;	// 0x303d0061
@end

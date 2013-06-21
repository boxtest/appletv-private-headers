/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFBaseFilterDataConsumer.h"


@interface MFBase64Encoder : MFBaseFilterDataConsumer {
	const char *_table;	// 12 = 0xc
	unsigned long _left;	// 16 = 0x10
	unsigned char _leftovers[3];	// 20 = 0x14
	unsigned long _line;	// 24 = 0x18
	unsigned long _lineBreak;	// 28 = 0x1c
	BOOL _padChar;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL allowSlash;	// G=0x3442f02d; S=0x3442f001; 
@property(assign, nonatomic) unsigned long lineBreak;	// G=0x3442f065; S=0x3442f075; @synthesize=_lineBreak
@property(assign, nonatomic) BOOL padChar;	// G=0x3442f085; S=0x3442f095; @synthesize=_padChar
- (id)initWithConsumers:(id)consumers;	// 0x3442e94d
// declared property getter: - (BOOL)allowSlash;	// 0x3442f02d
- (int)appendData:(id)data;	// 0x3442e9a5
- (void)done;	// 0x3442ed39
// declared property getter: - (unsigned long)lineBreak;	// 0x3442f065
// declared property getter: - (BOOL)padChar;	// 0x3442f085
// declared property setter: - (void)setAllowSlash:(BOOL)slash;	// 0x3442f001
// declared property setter: - (void)setLineBreak:(unsigned long)aBreak;	// 0x3442f075
// declared property setter: - (void)setPadChar:(BOOL)aChar;	// 0x3442f095
- (void)setStandardLineBreak;	// 0x3442f051
@end

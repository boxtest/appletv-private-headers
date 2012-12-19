/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOVLabelLanguage : PBCodable {
	unsigned _endOffset;	// 4 = 0x4
	NSString *_languageLocale;	// 8 = 0x8
	unsigned _startOffset;	// 12 = 0xc
}
@property(assign, nonatomic) unsigned endOffset;	// G=0x341cd1fd; S=0x341cd20d; @synthesize=_endOffset
@property(retain, nonatomic) NSString *languageLocale;	// G=0x341cd21d; S=0x341cd22d; @synthesize=_languageLocale
@property(assign, nonatomic) unsigned startOffset;	// G=0x341cd1dd; S=0x341cd1ed; @synthesize=_startOffset
- (void)copyTo:(id)to;	// 0x341cd059
- (void)dealloc;	// 0x341ccbc5
- (id)description;	// 0x341ccc09
- (id)dictionaryRepresentation;	// 0x341ccc79
// declared property getter: - (unsigned)endOffset;	// 0x341cd1fd
- (unsigned)hash;	// 0x341cd175
- (BOOL)isEqual:(id)equal;	// 0x341cd0d9
// declared property getter: - (id)languageLocale;	// 0x341cd21d
- (BOOL)readFrom:(id)from;	// 0x341ccfe1
// declared property setter: - (void)setEndOffset:(unsigned)offset;	// 0x341cd20d
// declared property setter: - (void)setLanguageLocale:(id)locale;	// 0x341cd22d
// declared property setter: - (void)setStartOffset:(unsigned)offset;	// 0x341cd1ed
// declared property getter: - (unsigned)startOffset;	// 0x341cd1dd
- (void)writeTo:(id)to;	// 0x341ccfed
@end

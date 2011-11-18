/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "ABVCardParser.h"

@class NSData, NSMutableDictionary;

@interface ABVCardCardDAVParser : ABVCardParser {
@private
	NSMutableDictionary *_unknownAttributes;	// 160 = 0xa0
	BOOL _removeExistingProperties;	// 164 = 0xa4
	BOOL _localRecordHasAdditionalProperties;	// 165 = 0xa5
	int _lastCropRectX;	// 168 = 0xa8
	int _lastCropRectY;	// 172 = 0xac
	int _lastCropRectWidth;	// 176 = 0xb0
	int _lastCropRectHeight;	// 180 = 0xb4
	NSData *_lastCropRectChecksum;	// 184 = 0xb8
}
@property(readonly, assign) NSData *lastCropRectChecksum;	// G=0x365bc829; @synthesize=_lastCropRectChecksum
@property(readonly, assign) int lastCropRectHeight;	// G=0x365bc839; @synthesize=_lastCropRectHeight
@property(readonly, assign) int lastCropRectWidth;	// G=0x365bc849; @synthesize=_lastCropRectWidth
@property(readonly, assign) int lastCropRectX;	// G=0x365bc869; @synthesize=_lastCropRectX
@property(readonly, assign) int lastCropRectY;	// G=0x365bc859; @synthesize=_lastCropRectY
@property(readonly, assign) BOOL localRecordHasAdditionalProperties;	// G=0x365bc879; @synthesize=_localRecordHasAdditionalProperties
- (id)initWithData:(id)data;	// 0x365c3a45
- (BOOL)_handleUnknownTag:(id)tag withValue:(id)value;	// 0x365bf751
- (void)cleanUpCardState;	// 0x365c3ab5
- (void *)createRecordInSource:(void *)source outRecordType:(unsigned *)type;	// 0x365c3c89
- (void)dealloc;	// 0x365c3d99
- (id)defaultADRLabel;	// 0x365bc821
- (id)defaultLabel;	// 0x365bc81d
- (id)defaultURLLabel;	// 0x365bc825
- (id)genericLabel;	// 0x365bf6ed
- (BOOL)importToGroup:(void *)group removeExistingProperties:(BOOL)properties;	// 0x365bff6d
- (BOOL)importToPerson:(void *)person removeExistingProperties:(BOOL)properties;	// 0x365bf861
// declared property getter: - (id)lastCropRectChecksum;	// 0x365bc829
// declared property getter: - (int)lastCropRectHeight;	// 0x365bc839
// declared property getter: - (int)lastCropRectWidth;	// 0x365bc849
// declared property getter: - (int)lastCropRectX;	// 0x365bc869
// declared property getter: - (int)lastCropRectY;	// 0x365bc859
// declared property getter: - (BOOL)localRecordHasAdditionalProperties;	// 0x365bc879
- (void)noteLackOfValueForImageData;	// 0x365c0051
- (void)noteLackOfValueForProperty:(unsigned)property;	// 0x365c3b95
- (BOOL)parseUID;	// 0x365bf6fd
- (void)setLocalRecordHasAdditionalProperties:(BOOL)properties;	// 0x365bc80d
@end


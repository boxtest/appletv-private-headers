/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOrthography.h"


@interface NSSimpleOrthography : NSOrthography {
	unsigned _orthographyFlags;	// 4 = 0x4
}
@property(readonly, assign) unsigned orthographyFlags;	// G=0x34726599; converted property
+ (void)initialize;	// 0x3472623d
+ (id)orthographyWithFlags:(unsigned)flags;	// 0x34726289
- (id)initWithCoder:(id)coder;	// 0x34726475
- (id)initWithDominantScript:(id)dominantScript languageMap:(id)map;	// 0x34726369
- (id)initWithFlags:(unsigned)flags;	// 0x347262c9
- (id)allLanguages;	// 0x34726691
- (id)allScripts;	// 0x34726675
- (Class)classForCoder;	// 0x347263f1
- (id)dominantLanguage;	// 0x34726655
- (id)dominantLanguageForScript:(id)script;	// 0x34726611
- (id)dominantScript;	// 0x3472655d
- (void)encodeWithCoder:(id)coder;	// 0x34726401
- (id)languageMap;	// 0x3472657d
- (id)languagesForScript:(id)script;	// 0x347265a9
// converted property getter: - (unsigned)orthographyFlags;	// 0x34726599
@end


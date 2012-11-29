/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@class AXLangMap, NSString, AXLanguageManager, NSLocale, NSCharacterSet;

@interface AXDialectMap : NSObject {
	AXLangMap *_langMap;	// 4 = 0x4
	NSString *_voiceName;	// 8 = 0x8
	NSLocale *_locale;	// 12 = 0xc
	NSString *_specificLanguageID;	// 16 = 0x10
	NSCharacterSet *_speakableCharacters;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) AXLanguageManager *langManager;	// G=0x33113ee5; 
@property(assign, nonatomic) AXLangMap *langMap;	// G=0x33114229; S=0x33114239; @synthesize=_langMap
@property(readonly, assign, nonatomic) NSString *languageNameAndLocaleInCurrentLocale;	// G=0x33114025; 
@property(readonly, assign, nonatomic) NSString *languageNameAndLocaleInNativeLocale;	// G=0x331140a9; 
@property(readonly, assign, nonatomic) NSString *languageNameInCurrentLocale;	// G=0x33113f29; 
@property(readonly, assign, nonatomic) NSString *languageNameInNativeLocale;	// G=0x33113fad; 
@property(retain, nonatomic) NSLocale *locale;	// G=0x3311426d; S=0x3311427d; @synthesize=_locale
@property(readonly, assign, nonatomic) NSString *regionID;	// G=0x33113f01; 
@property(retain, nonatomic) NSCharacterSet *speakableCharacters;	// G=0x331142b1; S=0x331142c1; @synthesize=_speakableCharacters
@property(copy, nonatomic) NSString *specificLanguageID;	// G=0x3311428d; S=0x331142a1; @synthesize=_specificLanguageID
@property(copy, nonatomic) NSString *voiceName;	// G=0x33114249; S=0x3311425d; @synthesize=_voiceName
- (id)initWithLocale:(id)locale voiceName:(id)name specificLanguageID:(id)anId speakableCharacters:(id)characters;	// 0x33113bc9
- (id)basicDescription;	// 0x33113e19
- (BOOL)canSpeakCharacter:(unsigned short)character;	// 0x33114161
- (BOOL)canSpeakLongCharacter:(unsigned long)character;	// 0x3311418d
- (BOOL)canSpeakString:(id)string;	// 0x331141b9
- (void)dealloc;	// 0x33113d75
- (id)debugDescription;	// 0x33113ed5
- (id)description;	// 0x33113e09
// declared property getter: - (id)langManager;	// 0x33113ee5
// declared property getter: - (id)langMap;	// 0x33114229
// declared property getter: - (id)languageNameAndLocaleInCurrentLocale;	// 0x33114025
// declared property getter: - (id)languageNameAndLocaleInNativeLocale;	// 0x331140a9
// declared property getter: - (id)languageNameInCurrentLocale;	// 0x33113f29
// declared property getter: - (id)languageNameInNativeLocale;	// 0x33113fad
// declared property getter: - (id)locale;	// 0x3311426d
// declared property getter: - (id)regionID;	// 0x33113f01
// declared property setter: - (void)setLangMap:(id)map;	// 0x33114239
// declared property setter: - (void)setLocale:(id)locale;	// 0x3311427d
// declared property setter: - (void)setSpeakableCharacters:(id)characters;	// 0x331142c1
// declared property setter: - (void)setSpecificLanguageID:(id)anId;	// 0x331142a1
// declared property setter: - (void)setVoiceName:(id)name;	// 0x3311425d
// declared property getter: - (id)speakableCharacters;	// 0x331142b1
// declared property getter: - (id)specificLanguageID;	// 0x3311428d
// declared property getter: - (id)voiceName;	// 0x33114249
@end

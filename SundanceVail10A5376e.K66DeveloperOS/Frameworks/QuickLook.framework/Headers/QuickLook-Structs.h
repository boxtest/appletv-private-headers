/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

typedef struct _NSZone NSZone;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _NSRange {
	unsigned _field1;
	unsigned _field2;
} NSRange;

typedef struct {
	int version;
	/*function-pointer*/ void *retain;
	/*function-pointer*/ void *release;
	/*function-pointer*/ void *copyDescription;
	/*function-pointer*/ void *equal;
} XXStruct_QrC3XA;

typedef struct {
	/*function-pointer*/ void *_field1;
	/*function-pointer*/ void *_field2;
	/*function-pointer*/ void *_field3;
	/*function-pointer*/ void *_field4;
} XXStruct_6QhCXB;

typedef struct __CFString *CFStringRef;

typedef struct RTFFont *RTFFontRef;

typedef struct RTFColor *RTFColorRef;

typedef struct RTFStyle *RTFStyleRef;

typedef struct _NSRTFPriv {
	void *reader;
	char *rtfInput;
	unsigned rtfInputLength;
	unsigned rtfInputLocation;
	unsigned rtfHeaderEndLocation;
	int pushedChar;
	int pushedClass;
	int pushedMajor;
	int pushedMinor;
	int pushedParam;
	BOOL pushedTextBuf[1024];
	int prevChar;
	int bumpLine;
	RTFFontRef fontList;
	RTFColorRef colorList;
	RTFStyleRef styleList;
	char *inputName;
	char *outputName;
	/*function-pointer*/ void *ccb[5];
	/*function-pointer*/ void *readHook;
	/*function-pointer*/ void *msgProc;
	/*function-pointer*/ void *panicProc;
	BOOL textBuf[1024];
	int textLen;
	int tokenClass;
	int major;
	int minor;
	int param;
	int lineNum;
	int linePos;
	int groupState;
} NSRTFPriv;

@class RTFNSFont, RTFNSMutableParagraphStyle;
typedef struct _NSAttributeInfo {
	unsigned toUniCharEncoding;
	unsigned codePageEncoding;
	RTFNSFont *font;
	float fontSize;
	float kern;
	RTFNSMutableParagraphStyle *paraStyle;
	unsigned bold : 1;
	unsigned italic : 1;
	unsigned fontIsValid : 1;
	unsigned paraStyleIsValid : 1;
	unsigned kernIsValid : 1;
	unsigned attributesSameAsBefore : 1;
	unsigned multiByteEncoding : 1;
	unsigned unicodeAlternativeLength : 3;
	unsigned tabStopType : 4;
	unsigned curAttributesNeedsCopying : 1;
	unsigned paraStyleNeedsCopying : 1;
	unsigned hasWritingDirectionAttribute : 1;
	unsigned  : 16;
} NSAttributeInfo;

typedef struct RTFCPZEndOfCentralDirectory {
	unsigned long long _field1;
	unsigned long long _field2;
	unsigned long long _field3;
} RTFCPZEndOfCentralDirectory;

typedef struct internal_state internal_state;

typedef struct z_stream_s {
	char *next_in;
	unsigned avail_in;
	unsigned total_in;
	char *next_out;
	unsigned avail_out;
	unsigned total_out;
	char *msg;
	internal_state *state;
	/*function-pointer*/ void *zalloc;
	/*function-pointer*/ void *zfree;
	void *opaque;
	int data_type;
	unsigned adler;
	unsigned reserved;
} z_stream_s;

typedef struct {
	int pid;
	struct {
		unsigned val[8];
	} audit_token;
	CGRect contentFrame;
} XXStruct_3Bq0WB;

typedef struct CGPDFDocument *CGPDFDocumentRef;

typedef struct CGPath *CGPathRef;


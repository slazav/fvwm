typedef union {  char *str;
          int number;
       } YYSTYPE;
#define	STR	257
#define	GSTR	258
#define	VAR	259
#define	NUMBER	260
#define	WINDOWTITLE	261
#define	WINDOWSIZE	262
#define	WINDOWPOSITION	263
#define	FONT	264
#define	FORECOLOR	265
#define	BACKCOLOR	266
#define	SHADCOLOR	267
#define	LICOLOR	268
#define	COLORSET	269
#define	OBJECT	270
#define	INIT	271
#define	PERIODICTASK	272
#define	MAIN	273
#define	END	274
#define	PROP	275
#define	TYPE	276
#define	SIZE	277
#define	POSITION	278
#define	VALUE	279
#define	VALUEMIN	280
#define	VALUEMAX	281
#define	TITLE	282
#define	SWALLOWEXEC	283
#define	ICON	284
#define	FLAGS	285
#define	WARP	286
#define	WRITETOFILE	287
#define	HIDDEN	288
#define	CANBESELECTED	289
#define	NORELIEFSTRING	290
#define	CASE	291
#define	SINGLECLIC	292
#define	DOUBLECLIC	293
#define	BEG	294
#define	POINT	295
#define	EXEC	296
#define	HIDE	297
#define	SHOW	298
#define	CHFORECOLOR	299
#define	CHBACKCOLOR	300
#define	CHCOLORSET	301
#define	GETVALUE	302
#define	CHVALUE	303
#define	CHVALUEMAX	304
#define	CHVALUEMIN	305
#define	ADD	306
#define	DIV	307
#define	MULT	308
#define	GETTITLE	309
#define	GETOUTPUT	310
#define	STRCOPY	311
#define	NUMTOHEX	312
#define	HEXTONUM	313
#define	QUIT	314
#define	LAUNCHSCRIPT	315
#define	GETSCRIPTFATHER	316
#define	SENDTOSCRIPT	317
#define	RECEIVFROMSCRIPT	318
#define	GET	319
#define	SET	320
#define	SENDSIGN	321
#define	REMAINDEROFDIV	322
#define	GETTIME	323
#define	GETSCRIPTARG	324
#define	IF	325
#define	THEN	326
#define	ELSE	327
#define	FOR	328
#define	TO	329
#define	DO	330
#define	WHILE	331
#define	BEGF	332
#define	ENDF	333
#define	EQUAL	334
#define	INFEQ	335
#define	SUPEQ	336
#define	INF	337
#define	SUP	338
#define	DIFF	339


extern YYSTYPE yylval;

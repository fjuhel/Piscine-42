ldapsearch -Q -LLL -L "(cn=z*)" cn | grep "cn" | sort -r | cut -c5-

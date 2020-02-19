def defangIPaddr(self, address: str) -> str:
    return re.sub(re.compile('[.]'), '[.]', address)